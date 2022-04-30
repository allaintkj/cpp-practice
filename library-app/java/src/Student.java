/**
 * Student Class
 * @author Sean Morrow
 */
public class Student {
    // private property variables
    private String id;
    private String name;
    private String email;
    
    public Student(String studentId) {
        id = studentId;
        name = "unassigned";
        email = "unassigned";
    }
    
    // -------------------------------------------------- get/set methods
    public String getId() {
        return id;
    }
    
    public String getEmail() {
        return email;
    }
    public void setEmail(String newEmail) {
        email = newEmail;
    }
    
    public String getName() {
        return name;
    }
    public void setName(String newName) {
        name = newName;
    }
}
