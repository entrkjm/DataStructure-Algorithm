class Static {
    public int a = 20;
    static int b = 0;  // Declare a static variable. The value will be shared with objects of 'Static' class.
}

public class Practice {
    public static void main(String[] args) {
        int a;
        a = 10;
        Static.b = a;
        Static st = new Static();
        System.out.println(Static.b++); // print 10 then plus 1 to static variable b
        System.out.println(st.b); // st.b share the same value with Static.b because b is callable without declaration of an object. That's why it's called static.
        System.out.println(a);
        System.out.println(st.a); // 20 is assigned to st.a when Static object st is declared.
    }
  
/*
Result
10
11
10
20
*/ 
