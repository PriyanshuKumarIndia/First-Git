angular.module('LunchCheck', [])
  .controller('LunchCheckController', LunchCheckController);

function LunchCheckController() {
  var vm = this;

  vm.checkLunch = function() {
    if (!vm.lunchItems || vm.lunchItems.trim() === "") {
      vm.message = "Please enter data first.";
    } else {
      var items = vm.lunchItems.split(',');
      var itemCount = items.length;

      // Removing empty items from the count (Bonus feature, ungraded)
      // items = items.filter(item => item.trim() !== "");
      // itemCount = items.length;

      if (itemCount <= 3) {
        vm.message = "Enjoy!";
      } else {
        vm.message = "Too much!";
      }
    }
  };
}
