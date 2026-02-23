// Loop until one number becomes zero
    while (b != 0) {
        temp = b;
        b = a % b; // Remainder
        a = temp;
    }