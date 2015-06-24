double sum(std::vector<double> list) {
    double accum = 0.0;
    for (int i = 0; i < list.size(); i++) {
        accum += list[i];
    }
    return accum;
}

double product(std::vector<double> list) {
    double accum = 1.0;
    for (int i = 0; i < list.size(); i++) {
        accum *= list[i];
    }
    return accum;
}

double sumOfSquares(std::vector<double> list) {
    double accum = 0.0;
    for (int i = 0; i < list.size(); i++) {
        accum += (list[i]*list[i]);
    }
    return accum;
}
