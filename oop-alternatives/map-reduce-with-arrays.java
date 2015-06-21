public double sum(double[] list) {
    double accum = 0.0;
    for (int i = 0; i < list.length; i++) {
        accum += list[i];
    }
    return accum;
}

public double product(double[] list) {
    double accum = 1.0;
    for (int i = 0; i < list.length; i++) {
        accum *= list[i];
    }
    return accum;
}

public double sumOfSquares(double[] list) {
    double accum = 0.0;
    for (int i = 0; i < list.length; i++) {
        accum += (list[i]*list[i]);
    }
    return accum;
}
