import java.util.*;
class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        System.out.println("Enter the radius");
        double r=sc.nextDouble();
        System.out.println("Enter the height :");
        double h=sc.nextDouble();
        
        double surface = 2*3.142*r*(h*r);
        double volume = 3.142*r*r*h;
        
        System.out.println("surface\n"+surface);
        System.out.println("volume \n"+volume);

    }
}

/*
Enter the radius
2
Enter the height :
3
surface
75.408
volume 
37.704
*/
