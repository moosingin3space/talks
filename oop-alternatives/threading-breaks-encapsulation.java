final class IdGen {
    private static int id = 0;
    private IdGen() {} // no constructor

    public static int GenerateId() {
        return id++;
    }
}

// From threaded code
IdObject obj = new IdObject(IdGen.GenerateId());
Database.insert(obj);
