class Solution
{
  public:
        vector <unsigned int> rotate (int n,int d)
        {
            d=d%16;
            int leftRotate=(n<<d) | (n>>(32-d));
            int rightRotate=(n>>d)|(n<<(32-d));
            vector<unsigned int> rotations;
            rotations.push_back(leftRotate);
            rotations.push_back(rightRotate);
            return rotations;
        }
};
