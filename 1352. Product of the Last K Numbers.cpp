//2




class ProductOfNumbers {

    private:
    vector<int>product;

public:
    ProductOfNumbers() {
        product.push_back(1);
    }
    
    void add(int num) {
        if(num==0){
            product={1};
        }
        else{
            product.push_back(product.back()*num);
        }
    }
    
    int getProduct(int k) {
        int n=product.size();

        if(k>=n) return 0;

        return product[n-1]/product[n-1-k];
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */




/*


#include <iostream>
#include <vector>

class ProductOfNumbers {
private:
    std::vector<int> prefixProduct;

public:
    ProductOfNumbers() {
        // Initialize with a "1" to handle product calculations easily.
        prefixProduct.push_back(1);
    }

    void add(int num) {
        if (num == 0) {
            // Reset prefixProduct list when 0 is added
            prefixProduct = {1};
        } else {
            // Compute the product including the new number
            prefixProduct.push_back(prefixProduct.back() * num);
        }
    }

    int getProduct(int k) {
        int n = prefixProduct.size();
        // If k elements go beyond the point where a 0 was added, return 0
        if (k >= n) return 0;
        return prefixProduct[n - 1] / prefixProduct[n - 1 - k];
    }
};

int main() {
    ProductOfNumbers productOfNumbers;
    productOfNumbers.add(3);        // [3]
    productOfNumbers.add(0);        // [3, 0]
    productOfNumbers.add(2);        // [3, 0, 2]
    productOfNumbers.add(5);        // [3, 0, 2, 5]
    productOfNumbers.add(4);        // [3, 0, 2, 5, 4]
    std::cout << productOfNumbers.getProduct(2) << std::endl;  // Output: 20 (5 * 4)
    std::cout << productOfNumbers.getProduct(3) << std::endl;  // Output: 40 (2 * 5 * 4)
    std::cout << productOfNumbers.getProduct(4) << std::endl;  // Output: 0 (due to zero in the list)
    return 0;
}



*/