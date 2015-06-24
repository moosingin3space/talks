class IdGen {
    private: 
        static int id = 0;
        static const std::mutex idLock;
        IdGen() {} // no constructor

    public:
        static int GenerateId() {
            idLock.lock();
            const int val = id++;
            idLock.unlock();
            return val;
        }
};

// From threaded code
IdObject obj(IdGen.GenerateId());
Database.insert(obj);
