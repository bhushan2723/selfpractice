//polymorphism

class student {
    String name;
    int age;
    public void printinfo(String name)
    {
        System.out.println(name);
    }
    public void printinfo(int age)
    {
        System.out.println(age);
    }
    public void printinfo(String name ,int age)
    {
        System.out.println(name + " " +age);
    }
}
class Main {
    public static void main(String[] args) {
        student s = new student();
        s.name="bhushan";
        s.age=21;
        s.printinfo(s.age);
        s.printinfo(s.name);
    }
}
