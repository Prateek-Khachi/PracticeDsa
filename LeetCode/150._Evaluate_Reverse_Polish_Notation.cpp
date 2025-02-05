class Solution
{
public:
    int evalRPN(vector<string> &tokens)
    {

        stack<int> st;
        int a, b;

        for (string i : tokens)
        {

            if (i == "+" || i == "-" || i == "*" || i == "/")
            {

                b = st.top();
                st.pop();

                a = st.top();
                st.pop();

                if (i == "+")
                    st.push(a + b);

                else if (i == "-")
                    st.push(a - b);

                else if (i == "*")
                    st.push(a * b);

                else
                    (st.push(a / b));
            }
            else
            {

                int num = stoi(i);
                st.push(int(num));
            }
        }

        return st.top();
    }
};