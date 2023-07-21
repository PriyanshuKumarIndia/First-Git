angular.module('MenuSearchApp', [])
.controller('NarrowItDownController', NarrowItDownController)
.service('MenuSearchService', MenuSearchService)
.constant('ApiBasePath', 'https://davids-restaurant.herokuapp.com');

NarrowItDownController.$inject = ['MenuSearchService'];
function NarrowItDownController(MenuSearchService) {
    var narrowCtrl = this;

    narrowCtrl.searchTerm = '';
    narrowCtrl.found = [];
    narrowCtrl.searched = false;

    narrowCtrl.narrowItDown = function() {
        if (narrowCtrl.searchTerm.trim() === '') {
            narrowCtrl.found = [];
            narrowCtrl.searched = true;
        } else {
            MenuSearchService.getMatchedMenuItems(narrowCtrl.searchTerm)
                .then(function(foundItems) {
                    narrowCtrl.found = foundItems;
                    narrowCtrl.searched = true;
                });
        }
    };

    narrowCtrl.dontWantThis = function(index) {
        narrowCtrl.found.splice(index, 1);
    };
}

MenuSearchService.$inject = ['$http', 'ApiBasePath'];
function MenuSearchService($http, ApiBasePath) {
    var service = this;

    service.getMatchedMenuItems = function(searchTerm) {
        return $http({
            method: 'GET',
            url: (ApiBasePath + '/menu_items.json')
        }).then(function(response) {
            var menuItems = response.data.menu_items;
            var foundItems = [];

            searchTerm = searchTerm.toLowerCase();

            menuItems.forEach(function(item) {
                if (item.description.toLowerCase().indexOf(searchTerm) !== -1) {
                    foundItems.push(item);
                }
            });

            return foundItems;
        });
    };
}
