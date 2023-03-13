public class Main {

    static void print(int n){

        if(n==0){
            //System.out.println(n);
            return;
        }
        System.out.println(n);
        print(n-1);

    }
    public static void main(String[] args){
        print(10);

    }
}
