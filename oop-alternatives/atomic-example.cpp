namespace id_generator {
    std::atomic<int> id(0);

    int getNextId() {
        const int newId = id.load()+1;
        id.store(newId);
        return newId;
    }
};
