final class IdGen {
    private static int id = 0;
    private static final Lock idLock = new ReentrantLock();
    private IdGen() {} // no constructor

    public static int GenerateId() {
        idLock.lock();
        final int val = id++;
        idLock.unlock();
        return val;
    }
}

// From threaded code
IdObject obj = new IdObject(IdGen.GenerateId());
Database.insert(obj);
