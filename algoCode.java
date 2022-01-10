import java.util.Scanner;
 
public class spyDetected {
    
    public static void main(String args[]){
    
        Scanner scan=new Scanner(System.in);
        
        
        int t=scan.nextInt();
       while(t!=0){ 
        
        int k=scan.nextInt();
         int kul[]=new int[k];
        int ct=0;
        int id=0;
         for (int i = 0; i < kul.length; i++) {
            int j=scan.nextInt();
            kul[i]=j;
            
        }
         for (int r = 0; r < kul.length; r++) {
             for (int i = 0; i < kul.length; i++) {
                 
                 if (kul[r]==kul[i]) {
                     ct++;
                 }
                     if (ct==1 && i==kul.length-1) {
                         id=r+1;
                     System.out.println(id+"\n");       
                         break;
                     
                 }
                         
            
        }
             ct=0;
      }
        t--;
       } 
    }
    
}