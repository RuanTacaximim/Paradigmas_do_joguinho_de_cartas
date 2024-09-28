class Carta {
private:
    int top, bottom, left, right;
public:
    // Construtor
    Carta(int t, int b, int l, int r) : top(t), bottom(b), left(l), right(r) {}
    
    // Getters
    int getTop() { return top; }
    int getBottom() { return bottom; }
    int getLeft() { return left; }
    int getRight() { return right; }

    // Método para exibir a carta
    void exibirCarta();
};
