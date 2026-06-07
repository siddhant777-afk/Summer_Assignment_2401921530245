public class LibraryInterfaceDemo {
    public static void main(String[] args) {
        KidUser kid = new KidUser();

        kid.age = 10;
        kid.bookType = "Kids";
        kid.registerAccount();
        kid.requestBook();

        kid.age = 18;
        kid.bookType = "Fiction";
        kid.registerAccount();
        kid.requestBook();

        AdultUser ad = new AdultUser();

        ad.age = 5;
        ad.bookType = "Kids";
        ad.registerAccount();
        ad.requestBook();

        ad.age = 23;
        ad.bookType = "Fiction";
        ad.registerAccount();
        ad.requestBook();
    }
}
