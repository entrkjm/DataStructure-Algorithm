class Book {
  private String name;
  private int year;
  public String getName(){
    return name;
  }
  public int getYear(){
    return year;
  }
  public void add(String name, int year){
    this.name = name;
    this.year = year;
  }
}
public class Soojebi {
  public static void main(String[] args) {
    Book b = new Book();
    b.add("Love", 24);
    System.out.print(b.getYear()+2000+b.getName()); 
    
    // '+' operator with two integer variables returns sum(Int)
    // '+' operator between integer and string returns string!

    
  }
}
