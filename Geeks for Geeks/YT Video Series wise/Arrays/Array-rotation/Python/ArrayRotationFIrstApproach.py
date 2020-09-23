# Function to leftRotateOnce
def leftRotateByOnce(array,size):
    temp = array[0]
    for i in range(size-1):
        array[i] = array[i+1]
    array[size-1] = temp


# Function to ratateUptoNumOfRotation
def leftRotateUpToNumOfRotation(array,size,numOfRotation):
    for i in range(numOfRotation):
        leftRotateByOnce(array,size)

# Function to print the array elements
def printArray(array,size):
    for i in range(size):
        print("% d" %array[i], end=" ")

# Driver function: Arrays are mutable in Python
array = [1,2,3,4,5,6,7]
size = len(array)
numOfRotation = 2
leftRotateUpToNumOfRotation(array,size,numOfRotation)
printArray(array,size)