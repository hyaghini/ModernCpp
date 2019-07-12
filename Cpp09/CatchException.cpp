try {
	x = someUnsafeFunction(a, b, c);
}
catch (runtime_error &ex) {
	cerr << "Runtime error: " << ex.what() << endl;
}
catch (logic_error &ex) {
	cerr << "Logic error: " << ex.what() << endl;
}
catch (exception &ex) {
	cerr << "Some exception: " << ex.what() << endl;
}