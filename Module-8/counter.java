class CounterUp extends Thread {
    @Override
    public void run() {
        for (int i = 1; i <= 20; i++) {
            System.out.println("Counter Up: " + i);
            try {
                Thread.sleep(500); // Simulate processing delay
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
    }
}

class CounterDown extends Thread {
    @Override
    public void run() {
        for (int i = 20; i >= 0; i--) {
            System.out.println("Counter Down: " + i);
            try {
                Thread.sleep(500); // Simulate processing delay
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
    }
}

public class ConcurrencyDemo {
    public static void main(String[] args) {
        // Create and start the CounterUp thread
        CounterUp counterUp = new CounterUp();
        counterUp.start();
        
        // Ensure CounterDown starts after CounterUp completes
        try {
            counterUp.join(); // Wait for CounterUp to finish
        } catch (InterruptedException e) {
            e.printStackTrace();
        }

        // Create and start the CounterDown thread
        CounterDown counterDown = new CounterDown();
        counterDown.start();
    }
}
