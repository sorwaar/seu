/**
 * Created by IntelliJ IDEA.
 * User: mattosaurus
 * Date: 02/01/2019
 * Time: 10:16 PM
 * To change this template use File | Settings | File Templates.
 */
public class Main {
    public static void main(String argv[]){
        Queens queens = new Queens(8);
        queens.solve();
        
        System.out.println(queens);
    }
}