public class parallelOut {
    public static void main(String args[]) {
      	// statement 1
	    //anonymous class
	  	Runnable parallelJavaR1 = new Runnable() {
            public void run() {
                System.out.println("Print 1");
            }
        };
	    //thread
        Thread parallelJavaT1 = new Thread(parallelJavaR1);
        parallelJavaT1.start(); 
        
		// statement 2
        Runnable parallelJavaR2 = new Runnable() {
            public void run() {
                System.out.println("Print 2");
            }
        };
        Thread parallelJavaT2 = new Thread(parallelJavaR2);
        parallelJavaT2.start(); 
        
		// statement 3
        Runnable parallelJavaR3 = new Runnable() {
            public void run() {
                System.out.println("Print 3");
            }
        };
        Thread parallelJavaT3 = new Thread(parallelJavaR3);
        parallelJavaT3.start(); 
        

		// at end of parallel block, join them all
        try {
            parallelJavaT1.join();
            parallelJavaT2.join();
            parallelJavaT3.join();
        } catch (InterruptedException ie) {
            ie.printStackTrace();
        }
    }
}

