public class BirthDayChocolate {
    public static void main(String[] args) {
        int[] intArray = {1,2,1};
        int day = 3;
        System.out.println(addingNumbers(intArray,day));
    }

    public static int addingNumbers(int[] array,int day) {
        int count = 0;
        for (int i=0;i<array.length;i++){
            int sum = 0;
            if(array.length>1){
                for (int j=i;j<day;j++){
                    sum+=array[j];
                }
                if(sum == day){
                    count++;
                }
            }else {
                if(array[0] == day){
                    count++;
                }
            }

        }
        return count;
    }
}

