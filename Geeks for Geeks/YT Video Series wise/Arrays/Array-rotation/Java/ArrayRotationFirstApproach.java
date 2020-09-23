public class ArrayRotationFirstApproach {

    public static void main(String[] args) {
        int[] intArray = {1,2,3,4,5,6};
        int numOfRotation = 2;
        printArray(rotateUptoNumOfRotation(intArray, numOfRotation));

    }

    // create a method to call : number of array rotation should be executed
    protected static int[] rotateUptoNumOfRotation(int[] intArray,int numOfRotation){
        for (int i = 0; i < numOfRotation; i++) {
           intArray = rotateOnce(intArray);
        }
        return intArray;
    }
    // Method : create one roation
    protected static int[] rotateOnce(int[] array){
        int temp = array[0];
        int i;
        for (i = 0; i < array.length - 1; i++) {
            array[i] = array[i+1];
        }
        array[i] = temp;
        return array;
    }
    // print the result
    protected static void printArray(int[] intArray){
        for (int i = 0; i < intArray.length; i++) {
            System.out.print(intArray[i]+" ");
        }
    }
}