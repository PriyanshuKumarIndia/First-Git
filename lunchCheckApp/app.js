angular.module('LunchCheck', [])
.controller('LunchCheckController', LunchCheckController);

LunchCheckController.$inject = ['$scope'];

function LunchCheckController($scope) {
    $scope.checkLunch = function() {
        // Check if the input is empty
        if (!$scope.lunchItems) {
            $scope.message = "Please enter data first";
            return;
        }

        // Split the input into an array of items
        var lunchItemsArray = $scope.lunchItems.split(',');

        // Remove empty items (e.g., ",," or " , , ")
        lunchItemsArray = lunchItemsArray.filter(function(item) {
            return item.trim() !== "";
        });

        // Check the number of items and display appropriate message
        if (lunchItemsArray.length === 0) {
            $scope.message = "Please enter data first";
        } else if (lunchItemsArray.length <= 3) {
            $scope.message = "Enjoy!";
        } else {
            $scope.message = "Too much!";
        }
    };
}
