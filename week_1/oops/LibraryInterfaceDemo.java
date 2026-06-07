public class LibraryInterfaceDemo {
    public static void main(String[] args) {
        KidUser k = new KidUser();

        k.age = 10;
        k.bookType = "Kids";
        k.registerAccount();
        k.requestBook();

        k.age = 18;
        k.bookType = "Fiction";
        k.registerAccount();
        k.requestBook();

        AdultUser a = new AdultUser();

        a.age = 5;
        a.bookType = "Kids";
        a.registerAccount();
        a.requestBook();

        a.age = 23;
        a.bookType = "Fiction";
        a.registerAccount();
        a.requestBook();
    }
}