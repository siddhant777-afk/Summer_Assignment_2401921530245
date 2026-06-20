import java.util.Random;

abstract class compartment {
    public abstract String notice();
}

class FirstClass extends compartment {
    public String notice() {
        return "This is the First Class Compartment";
    }
}

class Ladies extends compartment {
    public String notice() {
        return "This is the Ladies Compartment";
    }
}

class General extends compartment {
    public String notice() {
        return "This is the General Class Compartment";
    }
}

class Luggage extends compartment {
    public String notice() {
        return "This is the Luggage Class Compartment";
    }
}

public class TestCompartment {
    public static void main(String[] args) {
        compartment[] com = new compartment[10];
        Random r = new Random();
        for (int i = 0; i < com.length; i++) {
            int n = r.nextInt(4) + 1;

            if (n == 1) {
                com[i] = new FirstClass();
            } else if (n == 2) {
                com[i] = new Ladies();
            } else if (n == 3) {
                com[i] = new General();
            } else {
                com[i] = new Luggage();
            }
        }

        for (compartment i : com) {
            System.out.println(i.notice());
        }
    }

}
