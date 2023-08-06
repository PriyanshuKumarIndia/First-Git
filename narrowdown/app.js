// app.js
(function () {
    'use strict';
  
    angular.module('NarrowItDownApp', [])
      .controller('NarrowItDownController', NarrowItDownController)
      .service('MenuSearchService', MenuSearchService)
      .directive('foundItems', FoundItemsDirective);
  
    NarrowItDownController.$inject = ['MenuSearchService'];
    function NarrowItDownController(MenuSearchService) {
      var narrowDown = this;
      narrowDown.searchTerm = '';
      narrowDown.foundItems = [];
  
      narrowDown.narrowItDown = function () {
        if (narrowDown.searchTerm.trim() !== '') {
          var promise = MenuSearchService.getMatchedMenuItems(narrowDown.searchTerm);
          promise.then(function (foundItems) {
            narrowDown.foundItems = foundItems;
          });
        } else {
          narrowDown.foundItems = [];
        }
      };
  
      narrowDown.removeItem = function (index) {
        narrowDown.foundItems.splice(index, 1);
      };
    }
  
    MenuSearchService.$inject = ['$http'];
    function MenuSearchService($http) {
      var service = this;
  
      service.getMatchedMenuItems = function (searchTerm) {
        return $http({
          method: 'GET',
          url: 'https://coursera-jhu-default-rtdb.firebaseio.com/menu_items.json'
        }).then(function (response) {
          var foundItems = [];
          var menuItems = response.data;
  
          for (var i = 0; i < menuItems.length; i++) {
            if (menuItems[i].description.toLowerCase().indexOf(searchTerm.toLowerCase()) !== -1) {
              foundItems.push(menuItems[i]);
            }
          }
  
          return foundItems;
        });
      };
    }
  
    function FoundItemsDirective() {
      var ddo = {
        templateUrl: 'foundItems.html',
        scope: {
          foundItems: '<',
          onRemove: '&'
        },
        controller: FoundItemsDirectiveController,
        controllerAs: 'found',
        bindToController: true
      };
  
      return ddo;
    }
  
    function FoundItemsDirectiveController() {
      var found = this;
    }
  
  })();
  