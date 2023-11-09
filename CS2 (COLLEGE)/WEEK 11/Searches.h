/*
    Define a function that will tell whether or not a value occurs in an array

    inputs: array of integers
            length of array
            target value we are looking for
        EX: array {5, 1, 2, 9, 10, -4}

*/


bool myFunction(int arr[], int keyNum, int length){
    for(int i = 0; i < length; i++){
        if(keyNum == arr[i]){
            return true;
        }
        else if (i == length - 1)
        {
            return false;
        }
    }
}

bool seqSearchR(int arr[], int target, int length, int startIndex){
    // Base Case
    if(arr[startIndex] == length){
        return true;
    }
    else if(startIndex >= length - 1){
        return false;
    }

    // Recursive case
    else{
        arr++;

        return seqSearchR(arr, target, length, startIndex + 1);

    }
}

bool binarySearch(int arr[], int length, int start, int end, int target){
    start = 0;
    end = length - 1;
    int mid;

    while(start <= end){
        // find the middle index here
        mid = start + (end-start)/2;

        // check to see if the middle value is the target
        if(arr[mid] == target){
            // we found it!
            return true;
        }
        // if the middle value is NOT the target
        else{
            // is the middle value smaller than the target?
            if(arr[mid] < target){
                // move the end index to one before mid
                end = mid - 1;
            }
            else{
                // mid value is larger than target
                start = mid + 1;
            }
        }
    }

}

// Explain the algorithm to find the *location* by index
    // of the largest number in an array

    // Ex: arr = {5, 1, 7, 8, 2, 9, 10, 1, 5}
    //      length = 9
    // answer should be 6, since 10 is at index 6

// 1. Initialize
    // keep track of largestIndex (start it at zero)
    // keep track of the max (largest value we have seen)
        // assume the max is the first number in the array
    // keep track of my current index


// 2. Iteration
    // go to the next index (ex: index 1)
    // check if the index is valid
        // is index less than length?
            // NO - DONE with Iteration (Go to 3. Wrap up). (We went past end of array)
            // YES
            // Check: Is the value at this index greater than max?
                // NO - Do Nothing
                // YES - Change value of max to current value, AND
                    // largestIndex is my current index
            // Repeat (2. Iteration)

// 3. Wrap up
    // the largest value (max) is located at... largestIndex


// STEP 2: Translate your algorithm to machine instruction
int largestLoc(int arr[], int length){
    // 1. Initialization
    int largestIndex = 0;
    int max = arr[0];

    
    // go to next index (keep track of current index)
    int index = 1;
    while(index < length){
        // 2. Iteration
        // check if current value is larger than max
        if(arr[index] > max){
            max = arr[index];
            largestIndex = index;
        }
        index++; // go to next index
    }

    // 3. Wrap up
    return largestIndex;
}



