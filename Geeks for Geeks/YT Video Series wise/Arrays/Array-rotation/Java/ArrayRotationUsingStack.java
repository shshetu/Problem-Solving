import java.util.Stack;

public class ArrayRotationUsingStack {
    public static void main(String[] args) {
        int[] intArray = {1,2,3,4,5,6};
        int numOfRotation = 2; 
        Stack<Integer> stack = pushAndPeekFromStackUptoNumOfRotation(insertArrayToStack(intArray), numOfRotation);
        printStack(stack);
    }

    // Push to a stack upto a number of times to rotate
public static Stack<Integer> insertArrayToStack(int[] array){
    Stack<Integer> numberStack = new Stack<>();
    for (int i = 0; i < array.length; i++) {
        numberStack.push(array[i]);
    }
    return numberStack;
}

// Peek and push upto number of Rotation:
public static Stack<Integer> pushAndPeekFromStackUptoNumOfRotation(Stack<Integer> numberStack,int numOfRotation){
    while(numOfRotation>0) {
        int topNumOfStack = numberStack.pop();
        numberStack.add(0,topNumOfStack);
        numOfRotation--;
    }
    return numberStack;
}
// Print the stack
public static void printStack(Stack<Integer> numberStack) {
    // for (int i = numberStack.size()-1; i >= 0; i--) {
    //     System.out.print(numberStack.get(i)+" ");
    // }
    for (int i = 0; i < numberStack.size(); i++) {
        System.out.print(numberStack.get(i)+" ");
    }
}
}

