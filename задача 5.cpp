#include <iostream>

class dinmas
{
private:
    int m_dl = 1;
    int* m_mas = new int[m_dl];
public:
    dinmas(int first)
    {
        m_dl = 1;
        m_mas[0] = first;
    }
    ~dinmas()
    {
        delete[] m_mas;
    }

    void newel (int el)
    {
        int* nmas = new int[m_dl + 1];
        for (int i = 0; i < m_dl; i++)
            nmas[i] = m_mas[i];
        nmas[m_dl] = el;
        delete[] m_mas;
        m_mas = nmas;
        m_dl++;
    }

    int amountel()
    {
        return m_dl;
    }

    int someel(int number)
    {
        return m_mas[number];
    }

    void changeel(int number, int el)
    {
        m_mas[number] = el;
    }

    void deleteel(int number)
    {
        int* nmas = new int[m_dl - 1];

        for (int i = 0; i < number; i++)
            nmas[i] = m_mas[i];
        for (int i = number + 1; i < m_dl - 1; i++)
            nmas[i] = m_mas[i + 1];
        delete[] m_mas;
        m_mas = nmas;
        m_dl--;
    }

    void addel(int number, int el)
    {
        int* nmas = new int[m_dl + 1];

        for (int i = 0; i < number; i++)
            nmas[i] = m_mas[i];
        for (int i = number + 1; i < m_dl; i++)
            nmas[i+1] = m_mas[i];
        nmas[number] = el;
        delete[] m_mas;
        m_mas = nmas;
        m_dl++;
    }
};

int main()
{
    dinmas mas(1);
    mas.newel(2);
    mas.newel(3);
    mas.newel(4);
    mas.amountel();
    mas.someel(2);
    mas.changeel(1, 23);
    mas.deleteel(2);
    mas.addel(1, 24);
}
