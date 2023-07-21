document.addEventListener("DOMContentLoaded", function() {
    const toBuyList = document.getElementById("toBuyList");
    const alreadyBoughtList = document.getElementById("alreadyBoughtList");
    const nothingBoughtYet = document.getElementById("nothingBoughtYet");

    const shoppingItems = [
        { name: "cookies", quantity: 10 },
        { name: "milk", quantity: 2 },
        { name: "bread", quantity: 3 },
        { name: "eggs", quantity: 12 },
        { name: "apples", quantity: 5 },
    ];

    function displayToBuyList() {
        shoppingItems.forEach((item) => {
            const listItem = document.createElement("li");
            listItem.textContent = `Buy ${item.quantity} ${item.name}`;
            
            const boughtButton = document.createElement("button");
            boughtButton.textContent = "Bought";
            boughtButton.addEventListener("click", function() {
                buyItem(item);
            });

            listItem.appendChild(boughtButton);
            toBuyList.appendChild(listItem);
        });
    }

    function buyItem(item) {
        const listItem = document.createElement("li");
        listItem.textContent = `Bought ${item.quantity} ${item.name}`;
        alreadyBoughtList.appendChild(listItem);
        
        const index = shoppingItems.indexOf(item);
        shoppingItems.splice(index, 1);

        toBuyList.innerHTML = "";
        displayToBuyList();

        if (shoppingItems.length === 0) {
            nothingBoughtYet.style.display = "none";
            toBuyList.style.display = "none";
            alreadyBoughtList.innerHTML = "Everything is bought!";
        }
    }

    displayToBuyList();
});
