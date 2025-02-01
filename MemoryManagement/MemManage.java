public class MemManage {
    public static void main(String[] args) {
        String s = new String("allocate memory"); // allocate memory in heap
        printString(s);
        // do not need to explicetly dellocate mem. GC will take care
    }

    public static void printString(String s) {
        System.out.println(s);
    }
}