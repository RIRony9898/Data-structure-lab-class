// Variables
let a = new Array(100);
let n = 0;
let i, c, v, p;

// Function declarations
function OneD_Insertion_Last(b, nn, vv) {
    if (nn < 100) {
        b[nn] = vv;
        return nn + 1;
    } else {
        console.log("Array is full. Insertion failed.");
        return nn;
    }
}

function OneD_Array_Display(b, nn) {
    console.log("\nArray elements:");
    for (let i = 0; i < nn; i++) {
        console.log(b[i] + " ");
    }
    console.log("\n");
}

// Main function
while (true) {
    console.log("=====> Menu <=====");

    let input = prompt("\n\nEnter your choice: ");
    c = parseInt(input);

    switch (c) {
        case 0:
            process.exit(0);
            break;

        case 1:
            console.log("\nInsertion last");
            let valueInput = prompt("Enter new value for insertion: ");
            v = parseInt(valueInput);
            n = OneD_Insertion_Last(a, n, v);
            if (n <= 100) {
                console.log("Inserted successfully.");
            }
            break;

        case 4:
            console.log("\nDisplay");
            OneD_Array_Display(a, n);
            break;

        default:
            console.log("\nWrong choice");
            break;
    }
}
