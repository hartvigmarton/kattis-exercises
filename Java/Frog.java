public class Frog {

    private int jumpCap;
    private int weight;
    private int height;
    private boolean canJumpOut;
    private int distanceMissing;

    public Frog(int jumpCap,int weight,int height){
        this.jumpCap = jumpCap;
        this.weight = weight;
        this.height = height;
    }
    public void setCanJumpOut(boolean canJumpOut){
        this.canJumpOut = canJumpOut;
    }

    public void setHeight(int height) {
        this.height = height;
    }

    public void setJumpCap(int jumpCap) {
        this.jumpCap = jumpCap;
    }

    public void setWeight(int weight) {
        this.weight = weight;
    }

    public void setDistanceMissing(int distanceMissing) {
        this.distanceMissing = distanceMissing;
    }

    public int getHeight() {
        return height;
    }

    public int getJumpCap() {
        return jumpCap;
    }

    public int getWeight() {
        return weight;
    }

    public boolean isCanJumpOut() {
        return canJumpOut;
    }
}
