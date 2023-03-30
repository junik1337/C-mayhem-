/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 14:22:40 by ayassir           #+#    #+#             */
/*   Updated: 2023/03/30 16:00:10 by ayassir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <vector>

template <typename T>
void    pvec(T& vec)
{
	itr     it;

	for (it = vec.begin(); it != vec.end(); it++) {
		std::cout << *it << " ";
	}
}

template <typename T>
void	MergeSort(T& v32, T& left, T& right)
{
	size_t		i = 0,j = 0, k = 0;

	while (i < left.size() && j < right.size()) {
		if (left[i] <= right[j]) {
			v32[k++] = left[i++];
		} else {
			v32[k++] = right[j++];
		}
	}
    while (i < left.size()) {
        v32[k++] = left[i++];
    }
    while (j < right.size()) {
        v32[k++] = right[j++];
    }
}

template <typename T>
void	InsertionSort(T& array)
{
	for (size_t i = 1; i < array.size(); i++) {
		int		temp = array[i];
		int		j = i - 1;
		while (j >= 0 && array[j] > temp) {
			array[j + 1] = array[j];
			j--;
		}
		array[j + 1] = temp;
	}
}

template <typename T>
void	MergeInsertionSort(T& v32)
{
	if (v32.size() <= K)
		return (InsertionSort(v32));
	else {
		int	mid = v32.size() / 2;
		T	left(v32.begin(), v32.begin() + mid);	
		T	right(v32.begin() + mid, v32.end());
		MergeInsertionSort(left);
		MergeInsertionSort(right);
		MergeSort(v32, left, right);
	}	
}

bool	is__sorted(std::vector<int> v)
{
	for(itr it = v.begin(); it != v.end(); it++)
	{
		itr it2 = it+1;
		if (it2 != v.end() && *it > *it2)
			return false;
	}
	return true;
}

void    PmergeMe(char **av, int size)
{
	std::vector<int>    				v32;
	std::deque<int>						d32;;
	clock_t								start, end;
	double								elapsed;
	int              					push,i = 1;

	while (i <= size) {
		push = atoi(av[i++]);
		if (push < 0)
			throw(std::runtime_error("Error"));
		v32.push_back(push);
		d32.push_back(push);
	}
	if (is__sorted(v32))
		throw(std::runtime_error("Already sorted."));
	cout("Before: "), pvec(v32), cout(nl);

	start = clock();
	MergeInsertionSort(v32);
	end = clock();
	elapsed = ((double)(end - start) / CLOCKS_PER_SEC) ;

	cout("After: \t"), pvec(v32), cout(nl);
    // std::cout << "Is vector sorted: " << std::boolalpha <<
    //     is__sorted(std::begin(v32), std::end(v32)) << nl;

	cout("Time to process a range of "), cout(size);
	cout(" elements with std::vector : "), cout(elapsed*1e6), cout(" us\n");

	start = clock();
	MergeInsertionSort(d32);
	end = clock();
	elapsed = ((double)(end - start) / CLOCKS_PER_SEC) ;

    // std::cout << "Is deque sorted: " << std::boolalpha <<
    //     is__sorted(std::begin(d32), std::end(d32)) << nl;
	cout("Time to process a range of "), cout(size);
	cout(" elements with std::deque : "), cout(elapsed*1e6), cout(" us\n");
}