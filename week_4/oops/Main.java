class Outer {
      void display() {
        System.out.println("This is Outer class.");
    }

    class Inner {
        void display() {
            System.out.println("This is Inner class.");
        }
    }
}

public class Main {
 public static void main(String[] args) {
        Outer obj = new Outer();
        obj.display();
        Outer.Inner obj2 = obj.new Inner();
        obj2.display();
    }
}