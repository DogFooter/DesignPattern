#pragma once
class IStruct {

};

template <typename T, typename P>
class Factory {
protected:
	virtual T createProduct(P input) = 0;
	virtual void registerProduct(T product) = 0;

public:
	T create(P input) final {
		T p = createProduct(input);
		registerProduct(p);
		return p;
	}
};




