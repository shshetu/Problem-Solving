import java.util.LinkedList;
import java.util.List;
import java.util.Scanner;

public class BetweenTwoSets {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int m = input.nextInt();
        int n = input.nextInt();
        int[] a = new int[m];
        int[] b = new int[n];
//        int count = 0;
        List<Integer> list = new LinkedList<>();
        int minA = Integer.MAX_VALUE;
        int minB = Integer.MAX_VALUE;

        for (int i = 0; i < a.length; i++) {
            a[i] = input.nextInt();
            if (a[i] < minA) {
                minA = a[i];
            }
        }

        for (int i = 0; i < b.length; i++) {
            b[i] = input.nextInt();
            if (b[i] < minB) {
                minB = b[i];
            }
        }

        int j=1;
        int product = 1;
        while(product<=minB){
            product= minA*j;
            int countA = 0;
            for (int i=0;i<a.length;i++){
                if(product%a[i]==0){
                    countA++;
                }
                if(countA == a.length){
                    int countB =0;
                    for(int k=0;k<b.length;k++){
                        if(b[k]%product==0){
                            countB++;
                        }
                        if(countB==b.length){
                            list.add(product);
                        }
                    }
                }
            }
            ++j;
        }
        System.out.println(list.size());
        System.out.println(list);
    }

    //Method: getTotalX()
    public static void getTotalX(){

    }
}
