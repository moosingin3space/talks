class A {
    public void doA() {
        ...
    }
    private void doB() {
        ...
    }
}

class B {
    public void doSomething() {
        final A a = new A();
        a.doA(); // works, because doA is a public function
        a.doB(); // compiler error!
    }
}
