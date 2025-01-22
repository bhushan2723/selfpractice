//abtract class example
abstract class animal {
    abstract void show();
}
class dog extends animal
{
    public void show()
    {
        System.out.println("dog are loyal");
    }
}
class horse extends animal 
{
    public void show()
    {
        System.out.println("walk on 4 legs");
    }
}
class Main {
    public static void main(String[] args) {
    dog d = new dog();
    d.show();
    horse h = new horse();
    h.show();
    }
}
