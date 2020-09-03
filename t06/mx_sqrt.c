int mx_sqrt(int x) {
    int result;
    int mult;

    if (x  < 0) {
        return 0;
    }

    for (result = 1; result <= 46341; result++ ) {
        mult = result * result;
        if (mult == x) {
            break;
        }

        if( mult > x || result == 46341) {
            return 0;
        }
    }

    return result;
}
