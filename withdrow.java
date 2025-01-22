import java.util.*;
class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        System.out.println("Enter the amt to withdrow : ");
        int amount = sc.nextInt();
        
        int notes10 = amount/10;
        amount = amount % 10;
        
        int notes5 = amount/5;
        amount = amount % 5;
        
        int notes1 = amount;
        
        System.out.println("10 s" + notes10 +",5 s" +notes5+ " ,1 s "+notes1);
        
    }
}

/*
Enter the amt to withdrow : 
17
10 s1,5 s1 ,1 s 2
*/
