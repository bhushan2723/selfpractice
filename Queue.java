class Queue {
    private int[] arr;
    private int size;
    private int front;
    private int rear;

    Queue(int size) {
        this.size = size;
        arr = new int[size];
        rear = -1;
    }

    public boolean isEmpty() {
        return front > rear;
    }

    public boolean isFull() {
        return rear == size - 1;
    }

    public void add(int data) {
        if (isFull()) {
            System.out.println("Overflow");
            return;
        }
        arr[++rear] = data;
    }

    public int remove() {
        if (isEmpty()) {
            System.out.println("Empty queue");
            return -1;
        }
        return arr[front++];
    }

    public int peek() {
        if (isEmpty()) {
            System.out.println("Empty queue");
            return -1;
        }
        return arr[front];
    }
}
class Main {
    public static void main(String[] args) {
        Queue q = new Queue(5);
        q.add(1);
        q.add(2);
        q.add(3);
        q.add(4);
        q.add(5);
        System.out.println(q.remove()); // 1
        System.out.println(q.peek());   // 2
        
    }
}

