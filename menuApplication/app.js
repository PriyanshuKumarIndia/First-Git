angular.module('RestaurantMenuApp', ['ngRoute'])
  .config(['$routeProvider', function($routeProvider) {
    $routeProvider
      .when('/categories', {
        templateUrl: 'categories.html',
        controller: 'CategoriesController as categoriesCtrl',
        resolve: {
          categoriesData: ['MenuService', function(MenuService) {
            return MenuService.getCategories();
          }]
        }
      })
      .when('/items/:categoryName', {
        templateUrl: 'items.html',
        controller: 'ItemsController as itemsCtrl',
        resolve: {
          itemsData: ['MenuService', '$route', function(MenuService, $route) {
            var categoryName = $route.current.params.categoryName;
            return MenuService.getItemsByCategory(categoryName);
          }]
        }
      })
      .otherwise({
        redirectTo: '/'
      });
  }])
  .controller('MenuController', MenuController)
  .controller('CategoriesController', CategoriesController)
  .controller('ItemsController', ItemsController)
  .service('MenuService', MenuService);

function MenuController() {
  // Empty controller, as the home screen doesn't require any specific logic.
}

function CategoriesController(categoriesData) {
  var vm = this;
  vm.categories = categoriesData;
}

function ItemsController(itemsData) {
  var vm = this;
  vm.items = itemsData;
}

function MenuService($http) {
  var service = this;

  // Restaurant menu API URL
  var apiUrl = ' https://coursera-jhu-default-rtdb.firebaseio.com/menu_items/{categoryShortName}.json';

  // Get all categories
  service.getCategories = function() {
    return $http({
      method: 'GET',
      url: apiUrl + 'categories'
    }).then(function(response) {
      return response.data;
    });
  };

  // Get items by category
  service.getItemsByCategory = function(categoryName) {
    return $http({
      method: 'GET',
      url: apiUrl + 'items',
      params: {
        category: categoryName
      }
    }).then(function(response) {
      return response.data;
    });
  };
}
