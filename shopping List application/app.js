angular.module('ShoppingListApp', [])
  .controller('ShoppingListController', ShoppingListController);

function ShoppingListController() {
  var vm = this;

  // Initial To Buy list
  vm.toBuyList = [
    { name: "cookies", quantity: 10 },
    { name: "apples", quantity: 5 },
    { name: "milk", quantity: 2 },
    { name: "bread", quantity: 3 },
    { name: "eggs", quantity: 12 }
  ];

  // Initial Already Bought list
  vm.alreadyBoughtList = [];

  vm.buyItem = function(item) {
    var index = vm.toBuyList.indexOf(item);
    if (index !== -1) {
      vm.toBuyList.splice(index, 1);
      vm.alreadyBoughtList.push(item);
    }
  };
}
