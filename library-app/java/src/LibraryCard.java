/**
 * Library Card Class
 * @author Sean Morrow
 */
import java.util.*;

public class LibraryCard {
    
    public static final int MAX_BOOKS = 5;
    
    // private property variables
    private int borrowCount;
    private Student owner;
    private Calendar expiry;
    
    public LibraryCard(int numOfBooks) {
        borrowCount = 0;
        owner = null;
        
        expiry = Calendar.getInstance();
        expiry.add(expiry.YEAR, 1);
        
        checkOut(numOfBooks);
    }
    
    // ----------------------------------------------------- get/set methods
    public int getExpiryYear() {
        return expiry.get(expiry.YEAR);
    }
    public int getExpiryMonth() {
        return expiry.get(expiry.MONTH);
    }
    public int getExpiryDay() {
        return expiry.get(expiry.DAY_OF_MONTH);
    }
    
    public int getBorrowCount() {
        return borrowCount;
    }
    
    public void setOwner(Student student) {
        owner = student;
    }
    public String getOwnerName() {
        if (owner != null) {
            return owner.getName();
        } else {
            return "Owner not set";
        }
    }
    
    // ----------------------------------------------------- public methods
    public void checkOut(int numOfBooks) {
        Calendar currentDate = Calendar.getInstance();
        
        if (currentDate.after(expiry)) {
            System.out.println("Your card is expired! You can't check out this book!\n");
            return;
        } else {
            borrowCount += numOfBooks;
        }
        
        if (borrowCount > LibraryCard.MAX_BOOKS) {
            borrowCount = LibraryCard.MAX_BOOKS;
        }
    }
    
    public String reportMe() {
        if (owner == null) return "Owner not set";
        
        // generate the report
        String output = String.format("Student ID: %s\n"
                + "Student Name: %s\n"
                + "Email: %s\n"
                + "Books Borrowed: %d", 
                owner.getId(), owner.getName(), owner.getEmail(), borrowCount);
        
        return output;
    }
    
}
