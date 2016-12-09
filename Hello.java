class Hello {
    public native void mallocMe();
    static { System.loadLibrary("hello_native"); }
    public static void main(String[] args) {
        Hello h = new Hello();
        h.mallocMe();
	try {
	    Thread.sleep(60000);
	} catch (Exception e) {
	}
    }
}
