class IdGen {
    private: 
        static int id = 0;
        IdGen() {} // no constructor

    public:
        static int GenerateId() {
            return id++;
        }
};

// From threaded code
IdObject obj(IdGen.GenerateId());
Database.insert(obj);
