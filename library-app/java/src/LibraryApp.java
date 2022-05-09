/**
 * Multiple Custom Classes Demonstration
 * @author Sean Morrow
 */
public class LibraryApp {

    public static void main(String[] args) {
        Student student;
        
        student = new Student("w0090347");
        student.setName("Johnny Java");
        student.setEmail("jjava@nscc.ca");
        
        LibraryCard card = new LibraryCard(1);
        card.setOwner(student);
        card.checkOut(2);
        
        System.out.println("Card Report:");
        System.out.println(card.reportMe() + "\n");
        
        System.out.println("Max books to borrow: " + LibraryCard.MAX_BOOKS);
    }
    
}
